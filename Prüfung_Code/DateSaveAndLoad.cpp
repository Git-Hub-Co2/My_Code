#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

#define DataLength 10
#define MapingGraphPath "C:\\Users\\Yimin\\Desktop\\My_Code\\Prüfung_Code\\MapingGraph.txt"

using namespace std;

//@brief get GMapingGraph

int GMapingGraph [DataLength] ;// 全局变量

void GetMapingGraph (char *path , int length){
    fstream fp (path , ios::in );//只读文件 也可以写成 ifsteam fp( path , int length );
    int temp;
    if (!fp.is_open())
    {
        cout << "Could not load file : \n" << path <<endl;
        return ;

    }
    for (size_t i = 0; i < length ; i++)
    {
        fp >> temp;
        GMapingGraph [i] = temp;

    }
    cout << "Get Maping Graph done ." << endl;
    fp.close();
    
}

void SaveMapingGraph (char *path ,int length){

    ofstream fp (path , ios::trunc);//只写文件 + trunc若文件存在则删除后重建
    //std::fstream fp(path, std::ios::out | std::ios::trunc);//只写文件 + trunc若文件存在则删除后新建
    if (!fp.is_open())
    {
        cout << "Can't open file. " << endl;
        return;

    }
    for (size_t i = 0; i < length; i++)
    {
        fp << GMapingGraph[i];
        fp << " ";

    }
    fp.close();

}


int main(){
 
/**给全局变量GMapingGraph 赋值
*/
    cout << "Make a globe Valure GMapingGraph  " << endl;
	for (int i = 0; i < DataLength; i++)
	{
		GMapingGraph[i] = i * 10;
		cout << "GMapingGraph [" << i << "] = "<< (i, GMapingGraph[i]) << endl;
	}
 
/**全局变量GMapingGraph 存储
*/
	SaveMapingGraph(MapingGraphPath, DataLength);
 
/**全局变量GMapingGraph 全部置0
*/
    memset(GMapingGraph,0,sizeof(int)*DataLength);
    printf("全局变量GMapingGraph 全部置0 \n");
    for (int i = 0; i < DataLength; i++)
    {
	    cout << "GMapingGraph [" << i << "] = "<< (i, GMapingGraph[i]) << endl;
    }
 
/**全局变量GMapingGraph 读取
*/
	GetMapingGraph(MapingGraphPath, DataLength);
/**全局变量GMapingGraph 读取
*/
	printf("重新加载后的情况 \n");
	for (int i = 0; i < DataLength; i++)
	    {
	    	cout << "GMapingGraph [" << i << "] = "<< (i, GMapingGraph[i]) << endl;
	    }
 
	getchar();
	//system("PAUSE");
    return 0;
}