#ifndef REGRESSION_HPP
#define REGRESSION_HPP

#include <vector>

struct Result {
  double A;
  double B;
};

class Regression {
  struct Point {
    double x;
    double y;
    bool operator==(Point const& other) {
      return (this->x == other.x) && (this->y == other.y);
    }
  };

  std::vector<Point> points_{};

 public:
  int size() const;
  void add(double x, double y);
  bool remove(double x, double y);
  Result fit() const;
};

Result fit(Regression const& reg);

#endif