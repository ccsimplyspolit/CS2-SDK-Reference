#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_FuncBrush.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x1430
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_FuncMonitor : public source2sdk::client::C_FuncBrush
        {
        public:
            CUtlString m_targetCamera; // 0xfb0            
            std::int32_t m_nResolutionEnum; // 0xfb8            
            bool m_bRenderShadows; // 0xfbc            
            bool m_bUseUniqueColorTarget; // 0xfbd            
            uint8_t _pad0fbe[0x2]; // 0xfbe
            CUtlString m_brushModelName; // 0xfc0            
            // m_hTargetCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTargetCamera;
            char m_hTargetCamera[0x4]; // 0xfc8            
            bool m_bEnabled; // 0xfcc            
            bool m_bDraw3DSkybox; // 0xfcd            
            uint8_t _pad0fce[0x462];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncMonitor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncMonitor) == 0x1430);
    };
};
