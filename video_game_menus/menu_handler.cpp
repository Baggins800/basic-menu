#include <QTimer>
#include <QMouseEvent>
#include <QDebug>
#include "glbutton.h"
#include "menu_handler.h"

menu_handler::menu_handler( QWidget *parent ) : QOpenGLWidget(parent) {
  current_state = game_states::SPLASH;
  vsync = 16.66667;
  // create frame rate updater
  timer = new QTimer(this);
  connect(this->timer, SIGNAL(timeout()), this, SLOT(updateGL()));
  timer->start(static_cast<int>(vsync));

  // track mouse
  setMouseTracking(true);

  button = new glbutton(this);
  button->setGeometry(50, 50, 50, 50);
  button->show();
}
void menu_handler::initializeGL() {

}

void menu_handler::resizeGL(int w, int h) {

}
/* render all the frames here */
void menu_handler::paintGL() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    switch (current_state) {
    case game_states::SPLASH:

        break;

    case game_states::MENU:

        break;

    case game_states::GAME:

        break;

    default:

        break;
    }
    glFinish();
}
void menu_handler::mouseMoveEvent(QMouseEvent *event) {
  this->mouse_x = event->x();
  this->mouse_y = event->y();
}

/* update all stuff here */
void menu_handler::updateGL() {
    this->button->update();
    switch (current_state) {
    case game_states::SPLASH:

        break;

    case game_states::MENU:

        break;

    case game_states::GAME:

        break;

    default:

        break;
    }
    update();
}
