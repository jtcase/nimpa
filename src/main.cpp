#include "../include/app.h"
#include <iostream>

int main(int argc, char *argv[]) {
  App app;
  std::string fileName;

  if (argc > 1) {
    std::string fileName = argv[1];
    app.openFile(fileName);
  } else {
    std::cout << "Please use ./nimp filename.txt" << std::endl;
    return 1;
  }
  const char *tmux_env = std::getenv("TMUX");
  const char *screen_env = std::getenv("STY");
  if (tmux_env || screen_env) {
    std::string titleC = "printf '\\033]2;" + fileName + "\\007'";
    std::system(titleC.c_str());
  }

  app.start();
  return 0;
}
