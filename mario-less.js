function main() {
  loop(5)
}

function loop(height) {
  for (let row = 1; row <= height; row++) {
    for (let col = height; col > row; col--) {
      process.stdout.write(" ");
    }
    for (let hash = 1; hash <= row; hash++) {
      process.stdout.write("#");
    }
    process.stdout.write("\n");
  }
}

main()