#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelPlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc10
        // Has VTable
        #pragma pack(push, 1)
        class C_InWorldKeyBindPanel : public source2sdk::client::C_PointClientUIWorldPanel
        {
        public:
            // metadata: MNotSaved
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelPlayerPawn> m_hPlayer;
            char m_hPlayer[0x4]; // 0xc00            
            uint8_t _pad0c04[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_InWorldKeyBindPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_InWorldKeyBindPanel) == 0xc10);
    };
};
