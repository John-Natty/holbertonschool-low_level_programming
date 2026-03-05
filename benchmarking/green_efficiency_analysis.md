Measurement Methodology :

To evaluate software efficiency, execution time was measured using the clock() function from the C standard library <time.h>. All measurements were performed on the same machine under consistent conditions to reduce variability caused by hardware differences. The raw clock ticks returned by clock() were converted to seconds using CLOCKS_PER_SEC.

For baseline measurements, each program was executed three consecutive times to observe timing stability and variability. In the algorithm comparison task, both implementations were executed under identical conditions to ensure fairness. In the instrumentation experiment, timing boundaries were defined around each major phase (build_dataset, process_dataset, and reduce_checksum) as well as around the entire execution to compute total runtime.

All measurements were recorded directly from program output without modifying algorithm logic, ensuring that the results reflect actual execution cost.

Observed Performance Differences :

The comparison between the naive and single-pass implementations revealed a dramatic performance difference. The naive implementation required approximately 1.76 seconds on average, while the single-pass version completed in approximately 0.000066 seconds. This means the naive algorithm was about 26,000 times slower.

This large gap is explained by algorithmic complexity. The naive implementation uses nested loops, resulting in quadratic time complexity O(n²). In contrast, the single-pass version scans the array once, resulting in linear complexity O(n). The experimental results closely match theoretical expectations.

In the instrumentation experiment, the dataset construction phase was the slowest (~0.00034 seconds), followed by the processing phase (~0.00022 seconds), while the reduction phase was the fastest (~0.00007 seconds). Although all three phases have linear complexity O(n), the difference is due to the computational cost of operations performed inside each loop.

Relation Between Runtime and Energy Consumption :

Execution time serves as a practical proxy for energy consumption. Since energy can be approximated as power multiplied by time, longer CPU activity generally implies greater energy usage. While this experiment does not measure electrical power directly, runtime differences strongly suggest differences in energy efficiency.

The 26,000× slowdown observed in the naive algorithm implies significantly longer CPU utilization. At scale, such inefficiencies would translate into increased energy consumption and environmental impact.

Limitations of the Experiment :

This experiment has several limitations. First, clock() measures CPU time but does not directly measure electrical energy consumption. Second, execution times may vary slightly due to operating system scheduling and background processes. Third, the dataset size was fixed and relatively small compared to real-world applications. Additionally, hardware-level factors such as caching and CPU frequency scaling were not controlled.

Therefore, while the results clearly demonstrate performance differences, they should be interpreted within these constraints.

Practical Engineering Takeaway :

The most important takeaway is that algorithmic complexity has a far greater impact on performance and potential energy consumption than low-level micro-optimizations. Choosing an O(n) algorithm instead of an O(n²) algorithm can produce exponential performance improvements.

This project demonstrates the importance of measurement discipline, controlled experiments, and evidence-based reasoning when evaluating software efficiency. Developers should measure before optimizing and prioritize better algorithm design to improve both performance and sustainability.