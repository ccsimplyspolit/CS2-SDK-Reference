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
        // Size: 0xe20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_targetCamera"
        // static metadata: MNetworkVarNames "int m_nResolutionEnum"
        // static metadata: MNetworkVarNames "bool m_bRenderShadows"
        // static metadata: MNetworkVarNames "bool m_bUseUniqueColorTarget"
        // static metadata: MNetworkVarNames "CUtlString m_brushModelName"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetCamera"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bDraw3DSkybox"
        #pragma pack(push, 1)
        class C_FuncMonitor : public source2sdk::client::C_FuncBrush
        {
        public:
            // metadata: MNetworkEnable
            CUtlString m_targetCamera; // 0x9a8            
            // metadata: MNetworkEnable
            std::int32_t m_nResolutionEnum; // 0x9b0            
            // metadata: MNetworkEnable
            bool m_bRenderShadows; // 0x9b4            
            // metadata: MNetworkEnable
            bool m_bUseUniqueColorTarget; // 0x9b5            
            uint8_t _pad09b6[0x2]; // 0x9b6
            // metadata: MNetworkEnable
            CUtlString m_brushModelName; // 0x9b8            
            // metadata: MNetworkEnable
            // m_hTargetCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTargetCamera;
            char m_hTargetCamera[0x4]; // 0x9c0            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x9c4            
            // metadata: MNetworkEnable
            bool m_bDraw3DSkybox; // 0x9c5            
            uint8_t _pad09c6[0x45a];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncMonitor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncMonitor) == 0xe20);
    };
};
