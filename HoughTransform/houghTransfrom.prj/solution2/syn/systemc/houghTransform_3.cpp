#include "houghTransform.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void houghTransform::thread_hdltv_gen() {
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
        mHdltvinHandle << " , " <<  " \"s_axi_hough_AWVALID\" :  \"" << s_axi_hough_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_hough_AWREADY\" :  \"" << s_axi_hough_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_hough_AWADDR\" :  \"" << s_axi_hough_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_hough_WVALID\" :  \"" << s_axi_hough_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_hough_WREADY\" :  \"" << s_axi_hough_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_hough_WDATA\" :  \"" << s_axi_hough_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_hough_WSTRB\" :  \"" << s_axi_hough_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_hough_ARVALID\" :  \"" << s_axi_hough_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_hough_ARREADY\" :  \"" << s_axi_hough_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_hough_ARADDR\" :  \"" << s_axi_hough_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_hough_RVALID\" :  \"" << s_axi_hough_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_hough_RREADY\" :  \"" << s_axi_hough_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_hough_RDATA\" :  \"" << s_axi_hough_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_hough_RRESP\" :  \"" << s_axi_hough_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_hough_BVALID\" :  \"" << s_axi_hough_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_hough_BREADY\" :  \"" << s_axi_hough_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_hough_BRESP\" :  \"" << s_axi_hough_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

