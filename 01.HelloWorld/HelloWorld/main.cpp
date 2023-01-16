#include "widget.h"

#include <QApplication>

/*
 * 命名规范
 * 类名：使用大驼峰
 * 函数名、变量名，使用小驼峰
 */


/*
 * 快捷键
 * 帮助文档：双击选中类名，按下F1按键，鼠标移动到类上，可以再按一次F1跳转，esc按键返回
 * 帮助文档： C:\Installsoftware\Qt\Qt5.9.9\5.9.9\mingw53_32\bin\assistant.exe
 *
 * 自动对齐：ctrl + i
 * 同名文件.h和.cpp的切换，F4
 *
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
