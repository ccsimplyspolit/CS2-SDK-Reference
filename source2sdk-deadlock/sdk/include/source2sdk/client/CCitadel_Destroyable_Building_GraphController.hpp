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
        // Size: 0x1d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Destroyable_Building_GraphController : public source2sdk::client::CAnimGraphControllerBase
        {
        public:
            // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bHitTrigger;
            char m_bHitTrigger[0x28]; // 0x90            
            // m_eState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_eState;
            char m_eState[0x30]; // 0xb8            
            // m_flHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flHealth;
            char m_flHealth[0x28]; // 0xe8            
            // m_bActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bActive;
            char m_bActive[0x28]; // 0x110            
            // m_flHealthPercent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flHealthPercent;
            char m_flHealthPercent[0x28]; // 0x138            
            // m_bVulnerable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bVulnerable;
            char m_bVulnerable[0x28]; // 0x160            
            // m_bDestroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_bDestroyed;
            char m_bDestroyed[0x28]; // 0x188            
            // m_flExposedDurationFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_flExposedDurationFraction;
            char m_flExposedDurationFraction[0x28]; // 0x1b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Destroyable_Building_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Destroyable_Building_GraphController) == 0x1d8);
    };
};
