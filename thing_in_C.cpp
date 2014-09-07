// initialize our first generation of cells
bool cell_living[8][8];

for(int i = 0; i < 7; i++) {
    for(int j = 0; j < 7; j++) {
        cell_living[i][j] = false;
    }
}

void setup() {

    setpin(0, 2);
    setpin(1, 2);
    setpin(2, 2);
    setpin(3, 2);
    setpin(4, 2);
    setpin(5, 2);
    setpin(6, 2);
    setpin(7, 2);

    setpin(8, 2);
    setpin(9, 2);
    setpin(10, 2);
    setpin(11, 2);
    setpin(12, 2);
    setpin(13, 2);
    setpin(14, 2);
    setpin(15, 2);
}

void loop() {
    // turn on for 2ms, turn off for 14ms, see if we can see it


    rungeneration();

    // init nextgeneration cells to the status of cell_living (which are the ones in the present)
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {
            next_generation[i][j] == cell_living[i][j]
        }
    }
}

/*
void live_or_die(bool cell_living[8][8], bool comparison_cell[8][8]){

}
*/


void rungeneration() {

    bool next_generation[8][8];

    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {

            unsigned int living_neighbors = 0;
            if( (i == 0 || i == 7) && (j != 0 && j != 7) )
        }
    }

    for(int i = 0; i <= 7; i++) {
        for(int j = 0; j <= 7; j++) {

            unsigned int living_neighbors = 0;

            if(i == 0 || i == 7) {

                if(j == 0 || j == 7) { // if it's a corner case

                    // enumerated corner cases
                    if(i == 0 && j == 0) {
                        if(cell_living[1][0] == true) living_neighbors++;
                        if(cell_living[1][1] == true) living_neighbors++;
                        if(cell_living[0][1] == true) living_neighbors++;
                    } else if (i == 0 && j == 7) {
                        if(cell_living[0][6] == true) living_neighbors++;
                        if(cell_living[1][6] == true) living_neighbors++;
                        if(cell_living[1][7] == true) living_neighbors++;
                    } else if (i == 7 && j == 0) {
                        if(cell_living[6][0]) == true) living_neighbors++;
                        if(cell_living[6][1]) == true) living_neighbors++;
                        if(cell_living[7][1]) == true) living_neighbors++;
                    } else { // i == 7 && j == 7
                        if(cell_living[7][6]) == true) living_neighbors++;
                        if(cell_living[6][6]) == true) living_neighbors++;
                        if(cell_living[6][7]) == true) living_neighbors++;
                    }
                } else { // it's 2 parallel edges (corner exclusive): the bottom & top edges
                    
                    if(cell_living[i][j-1]) == true) living_neighbors++;
                    if(cell_living[i][j+1]) == true) living_neighbors++;                    
                    
                    if(i == 7) { // top edge
                        if(cell_living[i-1][j-1]) == true) living_neighbors++;
                        if(cell_living[i-1][j]) == true) living_neighbors++;
                        if(cell_living[i-1][j+1]) == true) living_neighbors++;
                    } else { // bottom edge
                        if(cell_living[i+1][j-1]) == true) living_neighbors++;
                        if(cell_living[i+1][j]) == true) living_neighbors++;
                        if(cell_living[i+1][j+1]) == true) living_neighbors++;
                    }
                }
            } else if (j == 0 || j == 7) { // all corner cases are ruled out; this is our other pair of edges: the left & right
                    if(cell_living[i+1][j]) == true) living_neighbors++;
                    if(cell_living[i-1][j]) == true) living_neighbors++;

                    if(j == 0) { // left edge
                        if(cell_living[i+1][j+1]) == true) living_neighbors++;
                        if(cell_living[i][j+1]) == true) living_neighbors++;
                        if(cell_living[i-1][j+1]) == true) living_neighbors++;
                    } else { // right edge
                        if(cell_living[i+1][j]) == true) living_neighbors++;
                        if(cell_living[i][j]) == true) living_neighbors++;
                        if(cell_living[i-1][j]) == true) living_neighbors++;                                 
                    }
            } else { // the cell is a center cell; it's surrounded by 8 others
                    if(cell_living[i-1][j-1]) == true) living_neighbors++;
                    if(cell_living[i][j-1]) == true) living_neighbors++;
                    if(cell_living[i+1][j-1]) == true) living_neighbors++;
                    if(cell_living[i-1][j+1]) == true) living_neighbors++;
                    if(cell_living[i][j+1]) == true) living_neighbors++;
                    if(cell_living[i+1][j+1]) == true) living_neighbors++;
                    if(cell_living[i+1][j]) == true) living_neighbors++;
                    if(cell_living[i-1][j]) == true) living_neighbors++;
            }

            // determine what cells die and revive
            if(cell_living[i][j] == true) {
                if(living_neighbors < 2 || living_neighbors > 3)
                    nextgeneration[i][j] = false;
            } else {
                if(living_neighbors == 3)
                    nextgeneration[i][j] = true;
            }
        }
    }

    // copy everything from our temp array to cell_living
    for(int i = 0; i <= 7; i++) {
        for(int j = 0; j <= 7; j++) {
            cell_living[i][j] = nextgeneration[i][j];
        }
    }
}






/*
     
            if(i == 0 || j == 0) { // if cell is a corner or edge cell
                
                if( (i==0 || i==7) && (j==0 || j==7) ) { // if cell is a corner cell

                    if(i == 0)

                } else { // else, cell is an edge cell

                }
            } else { // else, the cell is fully surrounded by 8 other cells

            }
*/
        
       
       }
       
     } 
    }
  } 
}

// before you finish: make sure you have nextgeneration passed in properly