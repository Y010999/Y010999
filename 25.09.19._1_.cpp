#include <iostream>
#include <vector>
using namespace std;

class matrix_adj
{
  public:
	int vertex;
	bool **matrix;

	void input_()
	{
		cin >> vertex;
		matrix = new bool *[vertex];
		for (int i = 0; i < vertex; i++)
		{
			matrix[i] = new bool[vertex];
		}
		for (int i = 0; i < vertex; i++)
		{
			for (int j = 0; j < vertex; j++)
			{
				cin >> matrix[i][j];
			}
		}
	}

	void output_()
	{
		cout << vertex << endl;
		cout << "   ";
		for (int i = 0; i < vertex; i++)
		{
			cout << (i + 1) << "  ";
		}
		cout << endl;
		for (int i = 0; i < vertex; i++)
		{
			for (int j = -1; j < vertex; j++)
			{
				if (j < 0)
				{
					cout << (i + 1) << "  ";
					continue;
				}
				cout << matrix[i][j] << "  ";
			}
			cout << endl;
		}
	}
};

class list_edge
{
  public:
	int vertex, edge;
	vector <pair <int, int> > list_;

	void input_()
	{
		cin >> vertex >> edge;
		for (int i = 0; i < edge; i++)
		{
			int a, b;
			cin >> a >> b;
			list_.push_back(make_pair(a, b));
		}
	}

	void output_()
	{
		cout << vertex << " ";
		edge = list_.size();
		cout << edge << endl;
		for (int i = 0; i < edge; i++)
		{
			pair<int, int> t = list_[i];
			cout << t.first << " " << t.second << endl;
		}
	}
};

class list_adj
{
  public:
	int vertex;
	vector < vector <int> > list_;

	void input_()
	{
		cin >> vertex;
		list_ = vector < vector <int> > (vertex);
		int a;
		for (int i = 0; i < vertex; i++)
		{
			for(int j = 0; j < vertex; j++)
            {
                cin >> a;
                if (a == -1) break;
                list_[i].push_back(a);
            }
		}
	}

	void output_()
	{
		cout << vertex << endl;
		for (int i = 0; i < vertex; i++)
		{
			vector <int> t = list_[i];
			cout << (i + 1) << " : { ";
			for (size_t j = 0; j < t.size(); j++)
			{
				cout << t[j] << ", ";
			}
			cout << "}" << endl;
		}
	}
};

void l_adj_to_m_adj(list_adj A, matrix_adj &B)
{
	B.vertex = A.vertex;
	B.matrix = new bool * [A.vertex];
	for (int i = 0; i < A.vertex; i++)
	{
		B.matrix[i] = new bool[A.vertex];
	}

	for(int i = 0; i < B.vertex; i++)
    {
        for(int j = 0; j < B.vertex; j++)
        {
            B.matrix[i][j] = 0;
        }
    }

	for (int i = 0; i < A.vertex; i++)
	{
		for (size_t j = 0; j < (A.list_[i].size()); j++)
		{
			B.matrix[i][A.list_[i][j] - 1] = 1;
		}
	}
}

void m_adj_to_l_adj(matrix_adj A, list_adj &B)
{ 
	B.vertex = A.vertex;
	B.list_ = vector < vector <int> > (B.vertex);

	for (int i = 0; i < A.vertex; i++)
	{
		for (int j = i; j < A.vertex; j++)
		{
			if (A.matrix[i][j])
			{
				(B.list_[i]).push_back(j+1);
				(B.list_[j]).push_back(i+1);
			}
		}
	}
}

void l_edge_to_m_adj(list_edge A, matrix_adj &B)
{
    B.vertex = A.vertex;
	B.matrix = new bool *[A.vertex];
	for (int i = 0; i < A.vertex; i++)
	{
		B.matrix[i] = new bool[A.vertex];
	}

	for(int i = 0; i < B.vertex; i++)
    {
        for(int j = 0; j < B.vertex; j++)
        {
            B.matrix[i][j] = 0;
        }
    }

	for (size_t i = 0; i < (A.list_).size(); i++)
	{
		pair <int, int> t = A.list_[i];
		B.matrix[t.first - 1][t.second - 1] = 1;
		B.matrix[t.second - 1][t.first - 1] = 1;
	}
}

void m_adj_to_l_edge(matrix_adj A, list_edge &B)
{  
    B.vertex = A.vertex;
	for (int i = 0; i < A.vertex; i++)
	{
		for (int j = i; j < A.vertex; j++)
		{
			if (A.matrix[i][j])
			{
				(B.list_).push_back(make_pair((i+1), (j+1)));
			}
		}
	}
}
   
void l_adj_to_l_edge(list_adj A, list_edge &B)
{
    B.vertex = A.vertex;
	for (int i = 0; i < A.vertex; i++)
	{
		for (size_t j = 0; j < (A.list_[i]).size(); j++)
		{
			if (A.list_[i][j] > i)
			{
				B.list_.push_back(make_pair((i+1), A.list_[i][j]));
			}
		}
	}
	B.edge = B.list_.size();
}

void l_edge_to_l_adj(list_edge A, list_adj &B)
{
    B.vertex = A.vertex;
    B.list_ = vector < vector <int> > (B.vertex);
	for (size_t i = 0; i < A.list_.size(); i++)
	{
		pair <int, int> t = A.list_[i];
		int k = t.first, l = t.second;
		B.list_[k-1].push_back(l);
		B.list_[l-1].push_back(k);
	}
}

int main()
{ 

	return 0;
}
