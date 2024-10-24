{
  inputs = {
    nixpkgs = {
      url = "github:NixOS/nixpkgs/nixos-unstable";
    };
  };
  outputs = {nixpkgs, ...}: let
    system = "x86_64-linux";
    pkgs = import nixpkgs {
      inherit system;
      overlays = [
        (final: prev: {
          eco32 = import ./default.nix {inherit pkgs;};
        })
      ];
    };
  in {
    packages = {
      ${system} = {
        default = pkgs.eos32-on-eco32;
        inherit (pkgs) eos32-on-eco32;
      };
    };
    devShells = {
      ${system} = {
        default = pkgs.stdenvNoCC.mkDerivation {
          name = "eos32-on-eco32-shell";
          buildInputs = with pkgs; [
            gcc14
            libuuid
          ];
        };
      };
    };
  };
}
