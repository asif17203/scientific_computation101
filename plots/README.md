# Plots Directory

## Overview

The `plots` directory contains PDF files that visualize the output data from the scientific computation codes. These plots are generated using GNU Plot and are named to correspond with the data files in the `data` directory.

## File Naming Convention

Each plot file corresponds to a specific data file in the `data` directory. The naming convention is as follows:
- **Data File**: `example_code.dat`, `example_code.csv`
- **Plot File**: `example_code.pdf`

## File Descriptions

- **`.pdf` Files**: PDF files containing visual plots of the data. These plots are generated using GNU Plot and provide a graphical representation of the data for analysis.

## Examples

- `example_code.pdf`: A plot generated from the `example_code.dat` or `example_code.csv` file, showing graphical representation of the data.

## Generating Plots

1. **Create a GNU Plot Script**:
   - Create a script in the `plots` directory specifying the plot settings and data file. For example, `plot_script.gnu` might include:
     ```gnuplot
     set terminal pdf
     set output 'example_code.pdf'
     set title 'Example Plot'
     set xlabel 'X-axis label'
     set ylabel 'Y-axis label'
     plot 'data/example_code.dat' using 1:2 with lines title 'Data'
     ```

2. **Run GNU Plot**:
   - Execute the GNU Plot script to generate the PDF plot:
     ```bash
     gnuplot /path/to/your/project/plots/plot_script.gnu
     ```

## Notes

- Ensure that the plot files accurately represent the data files.
- Adjust GNU Plot settings in the script as needed to match the data format and desired plot appearance.

