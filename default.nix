{pkgs ? import <nixpkgs> {}}:
pkgs.stdenvNoCC.mkDerivation rec {
  pname = "eos32-on-eco32";
  version = "0.1";
  name = "${pname}-${version}";
  src = pkgs.fetchFromGitHub {
    owner = "hgeisse";
    repo = pname;
    rev = "67d8c89bbee6f4f814bda87539639ea86d267a76";
    hash = "sha256-iQBc7/5a2ETJyfzwX3B5Wj3FFNb539EPBJnsWWMOtWY=";
  };
  buildInputs = with pkgs; [
    gcc14
    libuuid
  ];
  postPatch = ''
    mkdir -p build
    substituteInPlace make-link --replace-fail "#!/bin/bash" "#!${pkgs.bash}/bin/bash"
    substituteInPlace Makefile --replace-fail "all:		clean-dirs" "all:"
    cp -r --no-preserve=mode,ownership,timestamps ${pkgs.eco32}/* build
    chmod -R u+x build/bin
    chmod -R u+w build
  '';
  installPhase = ''
    mkdir -p $out
    cp -r build/* $out
  '';
}
