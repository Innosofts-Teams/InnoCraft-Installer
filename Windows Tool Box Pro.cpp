/*
*Copyright@2022, SGO
*All rights reserved
*文件名称:Windows Tool Box Pro
*当前版本:正式版1.0.0
*运行环境:Microsoft Windows 7+
*作者:SYSTEM-GOOGLE-OS 
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

int main()
{
	float pass=114514;
	FILE *fp;
	if ((fp=fopen("C:\\WTBset.txt","rb"))==NULL)         //检测是否注册 
    {
    	MessageBox(NULL, "你还没有注册！点击确定来注册Windows Tool Box Pro", "你没有注册！", MB_ICONERROR | MB_TOPMOST);
    	system("start .\\logs\\log.txt");
    	goto start1;       //未注册跳转注册 
	}
	else goto start2;
	start1:int key;
	printf("输入开发者给你的密钥:");
	scanf("%s",&key);
	if (key == pass)
	{
		fp==fopen("C:\\WTBset.txt","wb+");
		system("attrib +h C:\\WTBset.txt");
		MessageBox(NULL,"注册成功!感谢你使用Windows Tool Box Pro","注册成功!", MB_ICONASTERISK | MB_ICONINFORMATION);
		Sleep (500);
		goto start2;	
	}
	else
	{
		MessageBox(NULL, "Input Error!", "Windows Tool Box Pro Error!", MB_ICONERROR | MB_ICONHAND);
	    goto start1;
	}
	start2:
	system("cls");
	system("title Windows Tool Box Pro v1.0.0 [InnoSofts Confidential]");
	system("mode con cols=80 lines=35");
	system("color 3F");
	system("date /t");
	system("time /t");
	int iNum; 
	printf("\n------------------------Windows工具箱------------------------[输入0 退出]-------");
	printf("[以下是PE小工具:]\n");
	printf("1.bootice扇区小工具                    2.DiskGenius分区工具\n");
	printf("3.UEFI引导修复                         4.传统引导修复\n");
	printf("5.傲梅分区工具                         6.CPU-Z检测工具\n");
	printf("7.QEMU启动测试器                       8.ToDesk被控版\n");
	printf("9.AAct激活工具                         10.HEU-KMS激活工具\n");
	printf("11.Dism++                              12.Everything文件寻找\n");
	printf("13.HDTune硬盘检测                      14.Windows密码重置工具\n");
	printf("15.Wimtool(wim提取工具)                16.WinHex文件恢复工具\n");
	printf("17.WinNTSetup(Windows安装工具)\n"); 
	printf("\n[以下是WTB工具:]\n");
	printf("51.打开cmd                             52.打开组策略\n");
	printf("53.打开任务管理器                      54.打开注册表\n");
	printf("55.打开百度                            56.打开资源管理器\n");
	printf("57.打开无忧启动论坛                    58.进入SYSTEM账户(win7专用)\n");
	printf("59.弹出磁盘\n");
	printf("\n[以下是开发者工具:]\n");
	printf("101.打开IST官网                        102.取消注册WTBPro\n");
	printf("--------------------------------------------------------------------------------");
	printf("注意:根据电脑性能的不同，打开会有延迟\n\n");
	printf("请输入你的选择:");
	scanf("%d",&iNum);
	switch(iNum)
	{
	    case 0:exit(0);
		case 1:system("start .\\tools\\bootice.exe");break;
		case 2:system("start .\\tools\\dg.exe");break;
		case 3:system("start .\\tools\\UEfix.exe");break;
		case 4:system("start .\\tools\\NTFix.exe");break;
		case 5:system("start .\\tools\\PA.exe");break;
		case 6:system("start .\\tools\\cpuz.exe");break;
		case 7:system("start .\\tools\\Qemu.exe");break;
		case 8:system("start .\\tools\\ToDesk.exe");break;
		case 9:system("start .\\tools\\AAct.exe");break;
		case 10:system("start .\\tools\\HEU.exe");break;
		case 11:system("start .\\tools\\Dism++\\Dism++x64.exe");break;
		case 12:system("start .\\tools\\Everything.exe");break;
		case 13:system("start .\\tools\\HDTune.exe");break;
		case 14:system("start .\\tools\\NTPassword\\password.exe");break;
		case 15:system("start .\\tools\\Wimtool\\WimTool.EXE");break;
		case 16:system("start .\\tools\\winhex.exe");break;
		case 17:system("start .\\tools\\WinNTSetup\\WinNTSetup.exe");break;
		case 51:system("start cmd");break;
		case 52:system("start gpedit.msc");break;
		case 53:system("start taskmgr");break;
		case 54:system("start regedit");break;
		case 55:system("start www.baidu.com");break;
		case 56:system("start explorer.exe");break;
		case 57:system("start http://bbs.wuyou.net/forum.php");break;
		case 58:MessageBox(NULL, "注意:当弹出交互式服务检测时,点击查看信息\n\
进入桌面后请自行输入explorer.exe来打开桌面\n\
此功能只有Windows7适用!", "注意!", MB_ICONEXCLAMATION | MB_ICONWARNING);
				system("sc Create SuperCMD binpath= 'cmd /K start' type= own type= interact");
				system("net start SuperCMD");break;
		case 59:int num;
		        system("cls");
		        printf("1.A\t2.B\t3.C\t4.D\t5.E\t6.F\t7.G\t8.H\t9.I\t10.J\t11.K\n\n\
12.L\t13.M\t14.N\t15.O\t16.P\t17.Q\t18.R\t19.S\t20.T\t21.U\t22.V\n\n\
23.W\t24.X\t25.Y\t26.Z\n\n");
		        printf("你想弹出什么?\n");
		        printf("非必要请不要弹出C盘!\n");
		        printf("请输入:");
		        scanf("%d",&num);
		        switch(num)
				{
					case 1:system("mountvol A: /d");break;
					case 2:system("mountvol B: /d");break;
					case 3:system("mountvol C: /d");break;
					case 4:system("mountvol D: /d");break;
					case 5:system("mountvol E: /d");break;
					case 6:system("mountvol F: /d");break;
					case 7:system("mountvol G: /d");break;
					case 8:system("mountvol H: /d");break;
					case 9:system("mountvol I: /d");break;
					case 10:system("mountvol J: /d");break;
					case 11:system("mountvol K: /d");break;
					case 12:system("mountvol L: /d");break;
					case 13:system("mountvol M: /d");break;
					case 14:system("mountvol N: /d");break;
					case 15:system("mountvol O: /d");break;
					case 16:system("mountvol P: /d");break;
					case 17:system("mountvol Q: /d");break;
					case 18:system("mountvol R: /d");break;
					case 19:system("mountvol S: /d");break;
					case 20:system("mountvol T: /d");break;
					case 21:system("mountvol U: /d");break;
					case 22:system("mountvol V: /d");break;
					case 23:system("mountvol W: /d");break;
					case 24:system("mountvol X: /d");break;
					case 25:system("mountvol Y: /d");break;
					case 26:system("mountvol Z: /d");break;
					default:MessageBox(NULL, "Input Error!", "Windows Tool Box Pro Error!", MB_ICONERROR | MB_ICONHAND);
				}
		        MessageBox(NULL, "已弹出!", "Windows Tool Box Pro", MB_ICONASTERISK | MB_ICONINFORMATION);break;
		case 101:system("start www.innosofts.ml");break;
		case 102:system("start .\\logs\\WTBPro取消注册.exe");
		         exit(0);
		default:MessageBox(NULL, "Input Error!", "Windows Tool Box Pro Error!", MB_ICONERROR | MB_ICONHAND);
	}
	goto start2;
}
