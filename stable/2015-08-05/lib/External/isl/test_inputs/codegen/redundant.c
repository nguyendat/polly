for (int c0 = 0; c0 <= 2; c0 += 1)
  for (int c1 = max(0, b0 - 4 * c0 - 1); c1 <= 1; c1 += 1) {
    if (b0 >= 1 && 4 * c0 + c1 >= 1)
      for (int c2 = 1; c2 <= 2; c2 += 1) {
        if (c2 == 2) {
          for (int c3 = 1; c3 <= 14; c3 += 1)
            write(c0, c1, 8 * b0 - 3, c3);
        } else if (c1 == 1) {
          for (int c3 = 1; c3 <= 14; c3 += 1)
            write(c0, 1, 8 * b0 - 4, c3);
        } else
          for (int c3 = 1; c3 <= 14; c3 += 1)
            write(c0, 0, 8 * b0 - 4, c3);
      }
    for (int c2 = max(max(3, -8 * b0 + 6), 8 * c0 - 12); c2 <= min(min(7, -8 * b0 + 17), 8 * c0 + 6); c2 += 1)
      if (4 * c0 + c1 >= 2 * floord(2 * c1 + c2 - 5, 4) + 1 && 2 * ((2 * c1 + c2 - 1) / 4) + 7 >= 4 * c0 + c1 && 2 * c1 + c2 >= 4 * ((2 * c1 + c2 - 1) / 4) + 2 && ((-2 * c1 - c2 + 8) % 4) + 2 * c2 <= 14)
        for (int c3 = 1; c3 <= 14; c3 += 1)
          write(c0, c1, 8 * b0 + c2 - 5, c3);
  }
