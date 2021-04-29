
int fam(int k1, int k2, int k3, int k) {
  if(k == 1) {
    return k1+k2+k3;
  } 
  if(k == 2) {
    return k1/2+k2+k3;
  } 
  if (k == 3) {
    if(k1 > k2) {
      return k2 + (k1-k2)/3 + k3;
    } else {
      return k1 + (k2-k1)/2 + k3;
    }
  }
  if (k == 4) {
    int f = k2/2;
    int new_k2 = k2%2;
    if(k1 > k3) {
      f += k3;
      k1 -= k3;
      if(new_k2 == 1 && k1 >= 2) {
        f++;
        k1 -= 2;
      }
      f += k1/4;
    } else {
      f += k1;
      k3 -= k1;
      if(new_k2 == 1 && k3 >= 1) {
        f++;
        k3 -= 1;
      }
      f += k3/2;
    }
    return f;
  }
  return 0;
}
