#include"Manage.h"
using namespace std;
int main()
{
	cout << "*************************��ӭʹ��·�ɱ�����ϵͳ*************************\n\n";
	Manage master;
	while (1)
	{
		cout << "*************************�밴�չ������ѡ����*************************\n\n";
		cout << "\t\t**1.��ʾ·�ɱ�\t\t 2.�½����**\n\n";
		cout << "\t\t**3.�½�·��  \t\t 4.ɾ�����**\n\n";
		cout << "\t\t**5.ɾ��·��  \t\t 6.��    ��**\n\n";
		cout << "************************************************************************\n\n";
		int ans;
		cin >> ans;
		switch (ans)
		{
		default:cout << "�޴˹���\n\n"; break;
		case 1:if (master.Route.numVertices == 0)
		{
			master.empty();
			master.GetInformation();
		} master.shortestpath(); break;
		case 2:if (master.Route.numVertices == 0)
		{
			master.empty();
			master.GetInformation();
		}
			master.addVertex(); break;
		case 3:if (master.Route.numVertices == 0)
		{
			master.empty();
			master.GetInformation();
		}master.addEdge(); break;
		case 4:if (master.Route.numVertices == 0)
		{
			master.empty();
			master.GetInformation();
		}master.removeVertex(); break;
		case 5:if (master.Route.numVertices == 0)
		{
			master.empty();
			master.GetInformation();
		}master.removeEdge(); break;
		case 6:system("pause"); exit(0);
			break;
		}
	}
	
}