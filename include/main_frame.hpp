#pragma once

#include <borealis.hpp>

#include "utils.hpp"
#include "about_tab.hpp"
#include "list_download_tab.hpp"
#include "tools_tab.hpp"

class MainFrame : public brls::TabFrame
{
    private:
        //RefreshTask *refreshTask;

    public:
        MainFrame();
};
