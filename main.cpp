#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main() {
    RECT rect; //RECT是一个矩形结构体，相当于保存了一个矩形的四条边的坐标
    int x,y,width,height;
    const char *lpc=TEXT("Dota 2 登录");
    std::cout << "start......" << std::endl;
    HWND hwnd = FindWindow("vguiPopupWindow",lpc);

    GetWindowRect(hwnd,&rect); //获取指定窗口的位置

    x = rect.left;

    y = rect.top;

    width = rect.right - x;

    height = rect.bottom - y;

    Sleep(1000); //暂停5毫秒
    MoveWindow(hwnd,x,y+50,width,height,TRUE);
    Sleep(1000); //暂停5毫秒
    MoveWindow(hwnd,x,y-50,width,height,TRUE);

    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;
    std::cout << "width=" << width << std::endl;
    std::cout << "height=" << height << std::endl;

    return 0;
}
