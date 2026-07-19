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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MjollnirChain : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t chain_radius; // 0x1a58            
            std::int32_t chain_strikes; // 0x1a5c            
            float chain_damage; // 0x1a60            
            float chain_delay; // 0x1a64            
            float chain_damage_per_charge; // 0x1a68            
            float illusion_multiplier_pct; // 0x1a6c            
            std::int32_t m_iCurJumpCount; // 0x1a70            
            VectorWS m_vCurTargetLoc; // 0x1a74            
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1a80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MjollnirChain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_MjollnirChain) == 0x1a98);
    };
};
