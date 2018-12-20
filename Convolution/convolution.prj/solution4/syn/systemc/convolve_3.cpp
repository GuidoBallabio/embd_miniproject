#include "convolve.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void convolve::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_conv_AWVALID\" :  \"" << s_axi_conv_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_conv_AWREADY\" :  \"" << s_axi_conv_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_conv_AWADDR\" :  \"" << s_axi_conv_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_conv_WVALID\" :  \"" << s_axi_conv_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_conv_WREADY\" :  \"" << s_axi_conv_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_conv_WDATA\" :  \"" << s_axi_conv_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_conv_WSTRB\" :  \"" << s_axi_conv_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_conv_ARVALID\" :  \"" << s_axi_conv_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_conv_ARREADY\" :  \"" << s_axi_conv_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_conv_ARADDR\" :  \"" << s_axi_conv_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_conv_RVALID\" :  \"" << s_axi_conv_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_conv_RREADY\" :  \"" << s_axi_conv_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_conv_RDATA\" :  \"" << s_axi_conv_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_conv_RRESP\" :  \"" << s_axi_conv_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_conv_BVALID\" :  \"" << s_axi_conv_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_conv_BREADY\" :  \"" << s_axi_conv_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_conv_BRESP\" :  \"" << s_axi_conv_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

