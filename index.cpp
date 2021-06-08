//SystemFixer Main
//2021/5/16 17:25 
//by Timmy 
#include<iostream>
#include<windows.h>
#include<iomanip>
#define MAXN 10000
using namespace std;
int main(){ //main()
	//Loading Fixer Files
	cout<<"SystemFixer 6.2 主程序"<<endl;
	cout<<"======================"<<endl;
	int m,s,r,k;
	cout<<"1.使用sfc工具修复"<<endl;
	cout<<"2.使用Dism工具修复"<<endl;
	cout<<"3.帮助"<<endl;
	cout<<"4.退出该程序" <<endl;
	cout<<"请输入您的选择:";
	cin>>m;
	if(m==1){
		cout<<"1.使用scannow扫描方式"<<endl;
		cout<<"2.使用VERIFYONLY扫描方式(快)"<<endl; 
		cout<<"请输入sfc扫描方式:";
		cin>>s;
		if(s==1){
		    cout<<"正在启动修复程序..."<<endl;
			k=system("sfc /scannow");
			if(k==1){
				MessageBox(NULL,"遇到未知错误，可能是C:/Windows/System32/sfc.exe缺失或未使用管理员权限 \n请尝试以下步骤:\n1.使用管理员权限打开该文件\n2.到Internet上下载该文件并保存到C:/Windows/System32 \n3.若仍未解决，重新安装Windows","SystemFixer - 错误提示",MB_OK);
			}
			cout<<"修复成功，按任意键继续";
			system("pause>nul");
			k=0;
			return 0;
		}else if(s==2){
			cout<<"正在启动修复程序..."<<endl;
			system("sfc /VERIFYONLY");
			if(k==1){
				MessageBox(NULL,"遇到未知错误，可能是C:/Windows/System32/sfc.exe缺失或未使用管理员权限 \n请尝试以下步骤:\n1.使用管理员权限打开该文件\n2.到Internet上下载该文件并保存到C:/Windows/System32 \n3.若仍未解决，重新安装Windows","SystemFixer - 错误提示",MB_OK);
			}
			cout<<"修复成功，按任意键继续";
			k=0;
			system("pause>nul");
		}else{
			cout<<"输入的序号不是可用操作,按任意键继续"<<endl;
			system("pause>nul");
			return 0; 
		}
	}else if(m==2){
		cout<<"正在启动修复程序..."<<endl;
		Sleep(0.5);//Sleep 0.5 seconds
		system("Dism /Online /Cleanup-Image /CheckHealth");
		system("Dism /Online /Cleanup-Image /RestoreHealth");
		if(k==1){
			MessageBox(NULL,"遇到未知错误，可能是C:/Windows/System32/Dism/Dism.exe缺失或未使用管理员权限 \n请尝试以下步骤:\n1.使用管理员权限打开该文件\n2.到Internet上下载该文件并保存到C:/Windows/System32/Dism \n3.若仍未解决，重新安装Windows","SystemFixer - 错误提示",MB_OK);
		}
		//Fix the system
		cout<<"修复完成，按任意键继续";
		system("pause>nul");
		k=0;
		//Press any key to continue
		return 0; 
	}else if(m==3){
		cout<<"1.查看使用说明"<<endl;
		cout<<"2.查看软件关于"<<endl;
		cout<<"请输入您的选择:";
		cin>>r;
		if(r==1){
			system("cd lib");
			system("eula.txt");
			
			cout<<"操作成功完成，按任意键继续";
			system("pause>nul");
			return 0;
		}else if(r==2){
			MessageBox(NULL,"System Fixer 版本:6.2专业版\nSystem Fixer 内部版本:6236\n感谢您使用正版SystemFixer软件!","关于SystemFixer",MB_OK);
	    	cout<<"操作成功完成，按任意键继续";
	    	system("pause>nul");
		}else{
			cout<<"输入的序号不是可用的操作，按任意键继续"<<endl;
			system("pause>nul");
			return 0; 
		}
	}else if(m==5){
		return 0;
	}else{
		cout<<"输入的序号不是可用操作,按任意键继续"<<endl;
		system("pause>nul");
		return 0;
	}
}
//For Windows 10
//AppsData.2021
/*
These Texts for a program to fix the system
The version is 6.2
Files:
index.cpp:ResourseFile;index.exe:MainP;eula.txt:Readme
*/
