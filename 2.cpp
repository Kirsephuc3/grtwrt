//#include <iostream>
//#include <fstream>
//#define MAX 20
//using namespace std;
//char vertex[MAX];
//void input(int a[][MAX], int& n);
//void inputFile(int a[][MAX], int& n);
//void output(int a[][MAX], int n);
//int main()
//{
//	int a[MAX][MAX], n;
//	input(a, n);
//	output(a, n);
//	getWeight(a, n);
//	return 0;
//}
//void input(int a[][MAX], int& n)
//{
//	//Enter the number vertex of the graph
//	do {
//		cout << " Enter a number vertex of the graph: ";
//		cin >> n;
//	} while (n<0 && n > MAX);
//		// Enter the number  of each in the graph
//		cout << "Enter " << n << " name of each vertex in order: ";
//		for (int i = 0; i < n; i++)
//		{
//			cin >> vertex[i];
//		}
//	// Enter matrix ke
//		for (int i = 0; i < n; i++)
//		{
//			cout << "Adjacent or not ?" << endl << vertex[i] << ":";
//			for (int j = 0; j < n; j++)
//				cin >> a[i][j];
//		}
//}
//void inputFile(int a[][MAX], int &n)
//{
//	ifstream inFile;
//	inFile.open("graph.txt");
//	if (inFile.is_open())
//	{
//		inFile >> n;
//		for (int i = 0; i < n; i++)
//			inFile >> vertex[i];
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				cout << a[i][j];
//		inFile.close();
//		cout << " Doc thanh cong qq" << endl;
//	}
//	else
//		cout << " Error file !!";
//}
//void output(int a[][MAX], int n)
//{
//	cout << "\t";
//	//Output vertex 
//	for (int i = 0; i < n; i++)
//	{
//		cout << vertex[i] << "\t";
//	}
//	cout << endl;
//	// output vertex and matrix ke
//	for (int i = 0; i < n; i++)
//	{
//		cout << vertex[i] << "\t";
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//int findVertexByName(int n, char vertexName)
//{
//	int i = 0;
//	while (i < n)
//	{
//		if (vertex[i] == vertexName)
//		{
//			return i;
//		}
//		i++;
//	}
//	return -1;
//}
//void getWeight(int a[][MAX], int n)
//{
//	char vertexName;
//	cout << " Give vertex name: ";
//	cin >> vertexName;
//	int vertexid = findVertexByName(n, vertexName);
//	if (vertexName == -1)
//	{
//		cout << "Unable to find vertex name !!!";
//		return;
//	}
//	for (int j = 0; j < n; j++)
//	{
//		if (a[vertexid][j] == 1)
//		{
//			cout << vertex[j] << "\t";
//		}
//	}
//	cout << endl;
//}