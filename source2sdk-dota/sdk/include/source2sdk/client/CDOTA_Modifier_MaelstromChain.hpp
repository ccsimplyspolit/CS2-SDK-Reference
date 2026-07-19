#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MaelstromChain : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t chain_radius; // 0x1a58            
            std::int32_t chain_strikes; // 0x1a5c            
            std::int32_t chain_damage; // 0x1a60            
            float chain_delay; // 0x1a64            
            std::int32_t m_iCurJumpCount; // 0x1a68            
            VectorWS m_vCurTargetLoc; // 0x1a6c            
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x1a78            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MaelstromChain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MaelstromChain) == 0x1a90);
    };
};
