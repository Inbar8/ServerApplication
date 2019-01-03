////
//// Created by shaked on 1/3/19.
////
//
//#include "BFS.h"
//
//
//
//#include <iostream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <climits>
//using namespace std;
//
//// N x N matrix
//#define N 10
//
//// queue node used in BFS
//struct Node
//{
//    // (x, y) represents coordinates of a cell in matrix
//    int x, y;
//
//    // path stores complete path from source cell to cell (x, y)
//    vector<pair<int, int>> path;
//
//    // As we are using struct as a key in a std::map,
//    // we need to overload below operators
//
//    bool const operator==(const Node& ob) const
//    {
//        return x == ob.x && y == ob.y;
//    }
//
//    bool operator<(const Node& ob) const
//    {
//        return x < ob.x || (x == ob.x && y < ob.y);
//    }
//};
//
//// Below arrays details all 4 possible movements from a cell
//int row[] = { -1, 0, 0, 1 };
//int col[] = { 0, -1, 1, 0 };
//
//// The function returns false if pt is not a valid position
//bool isValid(int x, int y)
//{
//    return (x >= 0 && x < N) && (y >= 0 && y < N);
//}
//
//// Function to print the complete path from source to destination
//void printPath(vector<pair<int, int>> path)
//{
//    cout << "Destination Found:\t";
//    for (pair<int, int> p: path)
//        cout << "(" << p.first << ", " << p.second << ") ";
//    cout << '\n';
//}
//
//// Find shortest route in the matrix from source cell (x, y) to
//// destination cell (N - 1, N - 1)
//int findPath(int matrix[][N], int x, int y)
//{
//    vector<pair<int, int>> path;
//    path.push_back({x, y});
//
//    // create a queue and enqueue first node
//    queue<Node> Q;
//    Node src = {x, y, path};
//    Q.push(src);
//
//    // map to check if matrix cell is visited before or not
//    map<Node, bool> visited;
//    visited[src] = true;
//
//    // run till queue is not empty
//    while (!Q.empty())
//    {
//        // pop front node from queue and process it
//        Node curr = Q.front();
//        Q.pop();
//
//        int i = curr.x, j = curr.y;
//        path = curr.path;
//
//        // if destination is found, return true
//        if (i == N - 1 && j == N - 1)
//        {
//            printPath(path);
//            return path.size() - 1;
//        }
//
//        // value of current cell
//        int n = matrix[i][j];
//
//        // check all 4 possible movements from current cell
//        // and recurse for each valid movement
//        for (int k = 0; k < 4; k++)
//        {
//            // get next position coordinates using value of current cell
//            int x = i + row[k];
//            int y = j + col[k];
//
//            // check if it is possible to go to next position
//            // from current position
//            if (isValid(x, y))
//            {
//                // include next vertex in the path
//                path.push_back({x, y});
//
//                // construct next cell node
//                Node next = {x, y, path};
//
//                if (!visited.count(next))
//                {
//                    Q.push(next);
//                    visited[next] = true;
//                }
//
//                // exclude next vertex in the path
//                path.pop_back();
//            }
//        }
//    }
//
//    // return INFINITY if path is not possible
//    return INT_MAX;
//}
//
////
////// main function
////int main()
////{
////    int matrix[N][N] =
////            {
////                    { 4, 4, 6, 5, 5, 1, 1, 1, 7, 4 },
////                    { 3, 6, 2, 4, 6, 5, 7, 2, 6, 6 },
////                    { 1, 3, 6, 1, 1, 1, 7, 1, 4, 5 },
////                    { 7, 5, 6, 3, 1, 3, 3, 1, 1, 7 },
////                    { 3, 4, 6, 4, 7, 2, 6, 5, 4, 4 },
////                    { 3, 2, 5, 1, 2, 5, 1, 2, 3, 4 },
////                    { 4, 2, 2, 2, 5, 2, 3, 7, 7, 3 },
////                    { 7, 2, 4, 3, 5, 2, 2, 3, 6, 3 },
////                    { 5, 1, 4, 2, 6, 4, 6, 7, 3, 7 },
////                    { 1, 4, 1, 7, 5, 3, 6, 5, 3, 4 }
////            };
////
////    // Find a route in the matrix from source cell (0, 0) to
////    // destination cell (N - 1, N - 1)
////    int len = findPath(matrix, 0, 0);
////
////    if (len != INT_MAX)
////        cout << "Shortest Path length is " << len;
////
////    return 0;
////}