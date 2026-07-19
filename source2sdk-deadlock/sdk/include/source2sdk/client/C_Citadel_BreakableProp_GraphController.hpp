#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAnimGraphControllerBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x130
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_Citadel_BreakableProp_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_bSetInit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bSetInit;
            char m_bSetInit[0x28]; // 0x90            
            // m_flDamageReceived has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flDamageReceived;
            char m_flDamageReceived[0x28]; // 0xb8            
            // m_bOnRespawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bOnRespawn;
            char m_bOnRespawn[0x28]; // 0xe0            
            // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bHitTrigger;
            char m_bHitTrigger[0x28]; // 0x108            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_BreakableProp_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_BreakableProp_GraphController) == 0x130);
    };
};
