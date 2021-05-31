#include <iostream>

#include <vector>

#include <fstream>

using namespace std;

//Тут применяется алгоритм Дейкстры, частично

void min_dist(int (*A)[N], int from, int to){

  const int max_d = 9999;

  int tmp_min = 0;

  int tmp_node = 0;

  bool visited[N] = {false};

   int distances[N];

  for (int i=0; i< N; i++) distances[i] = max_d;
  
   distances[from] = 0;

    for (int i=0; i<N; i++){
		tmp_min = max_d;

 

        for (int j=0; j<N; j++)

        {

            if (!visited[j] && distances[j] < tmp_min){

                tmp_min = distances[j];

                tmp_node = j;

            }

        }

        visited[tmp_node] = true;
        for (int j=0; j<N; j++)

        {

            if (!visited[j] &&

                A[tmp_node][j] &&

                distances[tmp_node] + A[tmp_node][j] < distances[j])
                distances[j] = distances[tmp_node] + A[tmp_node][j];

        }

        if (visited[to]) break;

    }

    cout << distances[to] << endl;

}

 

