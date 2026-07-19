#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Juggernaut_Vaulted_Strike : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1a58            
            float m_flCurrentTimeVert; // 0x1a5c            
            VectorWS m_vTargetPos; // 0x1a60            
            VectorWS m_vStart; // 0x1a6c            
            float m_flZDelta; // 0x1a78            
            float jump_speed; // 0x1a7c            
            float start_height; // 0x1a80            
            float jump_attack_radius; // 0x1a84            
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1a88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_Vaulted_Strike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Juggernaut_Vaulted_Strike) == 0x1aa0);
    };
};
