#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

class Polygon {
public:
    Polygon() {
        nPoints = 0;
        points = NULL;
    }

    Polygon(const int nPoints, const Point* points) : nPoints(nPoints) {
        this->points = new Point[nPoints];
        for (int i = 0; i < nPoints; i++) {
            this->points[i] = points[i];
        }
    }

    // ���� ������ ����
    Polygon(const Polygon& rhs) {
        nPoints = rhs.nPoints;
        points = new Point[nPoints];
        for (int i = 0; i < nPoints; i++) {
            points[i] = rhs.points[i];
        }
        cout << "���� ����" << endl;
    }

    // �̵� ������ ����
    Polygon(Polygon&& rhs) : nPoints(rhs.nPoints), points(rhs.points) {
        rhs.nPoints = 0;
        rhs.points = nullptr;
        cout << "���� ����" << endl;
    }

    // ���� ���� ������ ����
    Polygon& operator=(const Polygon& rhs) {
        if (this != &rhs) {
            delete[] points;
            nPoints = rhs.nPoints;
            points = new Point[nPoints];
            for (int i = 0; i < nPoints; i++) {
                points[i] = rhs.points[i];
            }
        }
        cout << "���� ����" << endl;
        return *this;
    }

    // �̵� ���� ������ ����
    Polygon& operator=(Polygon&& rhs) {
        if (this != &rhs) {
            delete[] points;
            nPoints = rhs.nPoints;
            points = rhs.points;
            rhs.nPoints = 0;
            rhs.points = NULL;
        }
        cout << "���� ����" << endl;
        return *this;
    }

    ~Polygon() {
        delete[] points;
    }

    int GetNPoints() const {
        return nPoints;
    }

    Point* GetPoints() const {
        if (nPoints == 0) return NULL;
        return points;
    }

private:
    int nPoints;
    Point* points;
};

Polygon getSqare() {
    Point points[4] = { {0, 0}, {1, 0}, {1, 1}, {0, 1} };
    Polygon p(4, points);
    return p;
}

int main() {
    Polygon a;
    a = getSqare();    // ���� ��ü ���� 2ȸ
    Polygon b = a;    // ���� ��ü ���� 1ȸ
    Polygon c;
    c = a;    // ���� ��ü ���� 1ȸ

    int nPoints = c.GetNPoints();
    Point* points = c.GetPoints();
    for (int i = 0; i < nPoints; i++) {
        cout << "(" << points[i].x << "," << points[i].y << ")" << endl;
    }
}
