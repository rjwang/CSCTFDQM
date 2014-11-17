RUN=R000226129

all:
	@cmsRun run_csctf.py > run_csctf.log
	@mv DQM_V0001_L1T_R000000001.root DQM_V0001_L1T_$(RUN).root
	
plot:
	@root -l -b -q plotter.cc'("DQM_V0001_L1T_$(RUN).root","Run 1")'
	@mkdir -p Plots_$(RUN)
	@mv *.png Plots_$(RUN)/
	@mv *.pdf Plots_$(RUN)/


