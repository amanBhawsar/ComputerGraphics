#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <string>
using namespace std;


string generateCaptcha(int n)
{
    time_t t;
    srand((unsigned)time(&t));
    string ch = "abcdefghijklmnopqrstuvwxyz0123456789";//ABCDEFGHIJKLMNOPQRSTUVWXYZ
    string captcha = "";
    while (n--)
        captcha.push_back(ch[rand()%(62-26)]);
    return captcha;
}


int main()
{
	int gd = DETECT, gm;
	char ans[1];
	time_t t;
    srand((unsigned)time(&t));
    int n;
    cout << "Enter length of captcha to be generated :- \n";
    cin >> n;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    string captcha = generateCaptcha(n);
    for(int i=0;i<n;i++){
        setcolor(rand()%4+3);
        settextstyle(3,0,8);       //rand()%4+
        ans[0]=captcha[i];
        outtextxy(60*i,100,ans);
    }
	getch();
	closegraph();

	return 0;
}
