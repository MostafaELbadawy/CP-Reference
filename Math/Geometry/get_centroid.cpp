#define point complex<ld>
#define cp(a, b) ((conj(a) * b).imag())
#define X real()
#define Y imag()

point get_centroid(vector<point> &p){
    p.push_back(p[0]);
    ld x = 0, y = 0, area = 0;
    for(int i = 0; i + 1 < (int) p.size(); i++){
        ld tmp = cp(p[i], p[i + 1]);
        area += tmp;
        x += (p[i].X + p[i + 1].X) * (tmp);
        y += (p[i].Y + p[i + 1].Y) * (tmp);
    }
    p.pop_back();
    area /= 2;
    x = (x / (6 * area));
    y = (y / (6 * area));
    return point(x, y);
}
