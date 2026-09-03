// glc2d 라이브러리 연결
#if defined(_DEBUG)
#if defined(_M_X64)
#pragma comment(lib, "glc2d_x64_debug.lib")
#elif defined(_M_IX86)
#pragma comment(lib, "glc2d_win32_debug.lib")
#endif
#else
#if defined(_M_X64)
#pragma comment(lib, "glc2d_x64_release.lib")
#elif defined(_M_IX86)
#pragma comment(lib, "glc2d_win32_release.lib")
#endif
#endif


// glc2d 헤더
#include "glc2d.h"

#include <stdio.h>


int FrameMove(void)
{
    
    // 입력
    // 이동
    // 충돌
    return 0;
}




int Render(void)  //화면 출력
{
    // 플레이어
    // 적
    // 배경

    return 0;
}

int main()
{
    // 1. glc2d 초기화
    g2_InitSdk();
    // 2. 게임 창 생성
    g2_CreateWin(
        100,
        100,
        1024,
        600,
        "My Game"
    );
    g2_SetFrameMove(FrameMove);
    // 4. 화면 그리기
    g2_SetRender(Render);
    // 5. 게임 실행
    g2_Run();
    // 6. 게임 종료 후 창 제거
    g2_DestroyWin();


    return 0;
}