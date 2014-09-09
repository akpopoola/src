#ifndef __ACDIVA_SELFDOC__
#define __ACDIVA_SELFDOC__

const char * sdoc[] = {
" IVA based on acoustic constant density centered difference modeling in ",
" 2D or 3D.", 
" ",
" Authors: Muhong Zhou, Yin Huang, William W. Symes",
" ",
" Typical parameter list. May be copied, edited, and used for input: either",
" include parameters on command line (for example in Flow), or place",
" in file <foo> and include \"par=<foo>\" on command line. Any parameter",
" included explicitly in command line overrides parameter with same key",
" in par file.",
" ",
"  Invoke single threaded execution by ",
" ",
" \"sfacdwemva [parameters]  [Madagascar install]\"",
" ",
" or ",
" ",
" \"acdwemva.x [parameters] [standalone install]\"",
" ",
" or multi-threaded execution using interactive or batch MPI (for which",
" code must be compiled with MPI enabled).",
" ",
" Given values are defaults; non-optional values indicated by corner brackets.",
" ",
" --------------------------- begin parameters ---------------------------",
" ",
" FD info:",
" ",
"          order = 2           spatial half-order",
"            cfl = 0.75        proportion of max dt/dx",
"           cmin = 1.0         min permitted velocity (m/ms) - sanity check",
"           cmax = 4.5         max permitted velocity (m/ms) - used in dt comp",
" ",
" ------------------------------------------------------------------------",
" Source info:",
" ",
"         source = <path>      path to input source data file (traces), ",
" 	                       SU format, source position(s) indicated by",
"                              RECEIVER coordinates (gx, gy, gelev) - may",
"                              prepare input source with correct headers",
"                              using trace/main/towed_array.x",
"        sampord = 1           spatial interp order - 0 (nr nbr) or ",
"                              1 (multilin)",
" ",
" ------------------------------------------------------------------------",
" Trace info:",
" ",
"      datafile  = <path>      input data file, SU format - must exist ",
"                              headers establish acquisition geometry",
" ",
" ------------------------------------------------------------------------",
" Model info:",
" ",
"            csq = <path>      input vel-squared reference file, ",
"                              determines simulation spatial grid,",
"                              only headers used in this application",
"                              but can name same file as initial vel-",
"                              squared model"
" ",  
"     init_velsq = <path>      input initial vel-squared",
" ", 
"    final_velsq = <path>      output final WEMVA vel-squared estimate",
" ",
"   reflectivity = <path>      output vel-squared perturbation",
"                              aka true-amplitude migration",
" ",
"       DSWeight = 0.0         differential semblance penalty weight",
" ",
" ------------------------------------------------------------------------",
" MPI info:",
" ",
"        mpi_np1 = 1           number of subdomains along axis 1",
"        mpi_np2 = 1           number of subdomains along axis 2",
"        mpi_np3 = 1           number of subdomains along axis 3",
"        partask = 1           number of shots to execute in parallel",
" ",
" ------------------------------------------------------------------------",
" Conjugate Gradient info (inner linear inversion)",
" ",
"    ResidualTol = 100.0*numeric_limits<float>::epsilon()",
"                              relative residual reduction thresshold",
"    GradientTol = 100.0*numeric_limits<float>::epsilon()",
"                              relative gradient reduction threshhold",
"        MaxStep = numeric_limits<float>::max()",
"                              max permitted step length",
"        MaxIter = 10          CG iteration limit",
" ",
" ------------------------------------------------------------------------",
" LBFGS info (outer nonlinear inversion)",
" ",
"       InvHessianScale = 1.0f",
"                              overall inverse Hessian scale",
"  MaxInvHessianUpdates = 5",
"                              dimension of BFGS subspace",
"      MaxLineSrchSteps = 10",
"                              max linesearch steps permitted",
"        VerboseDisplay = true", 
"                              false = no output, true = function",
"                              value, gradient norm at each iteration,",
"                              report of line search",
"       FirstStepLength = 1.0f", 
"                              initial step length, fraction of gradient",
"    GAStepAcceptThresh = 0.1f",
"                              first Goldstein-Armijo param",
"    GAStepDoubleThresh = 0.9f", 
"                              second Goldstein-Armijo param",
"        LSBackTrackFac = 0.5f", 
"                              step decrease factor for line search",
"           LSDoubleFac = 1.8f",
"                              step increase factor for line search",
"     MaxFracDistToBdry = 1.0", 
"                              fraction of max step to boundary permitted",
"         LSMinStepFrac = 1.e-06",
"                              minimum fraction of step permitted",
"          MaxLBFGSIter = 3", 
"                              iteration limit for BFGS steps",
"         AbsGradThresh = 0.0", 
"                              absolute stopping tolerance for gradient",
"         RelGradThresh = 1.e-2",
"                              relative stopping tolerance for gradient",
" ", 
" ------------------------------------------------------------------------",
" Output info:",
" ",
"        outfile = \"\"        output filename for optimization - if empty",
"                              string, then output goes to terminal",
" ",
" FD ouput - written to coutxxx.txt on rank xxx",
"       printact = 0           output at every time step",
"                              0 - none",
"                              1 - time step index",
"                              2 - diagnostic messages from main routines",
"                              > 2 - much more, useful only for serious ",
"                                 debugging",
"        dump_pi = 0           dump parallel/dom. decomp info",
"       dump_lda = 0           dump grid data for allocated arrays",
"       dump_ldc = 0           dump grid data for computational arrays",
"       dump_ldr = 0           dump grid data for receive buffers",
"       dump_lds = 0           dump grid data for send buffers",
"      dump_term = 0           dump trace header data",
" ",
" ---------------------------end parameters ------------------------------",
NULL };

#endif
