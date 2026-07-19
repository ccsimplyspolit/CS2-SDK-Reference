#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_TempTree;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Tree;
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
        class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t visual_height; // 0x1a58            
            float animation_rate; // 0x1a5c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a60            
            bool m_bPullComplete; // 0x1a64            
            uint8_t _pad1a65[0x3]; // 0x1a65
            std::uint32_t m_TreeId; // 0x1a68            
            float m_flDamagePerTick; // 0x1a6c            
            std::int32_t m_nDamageTicks; // 0x1a70            
            std::int32_t m_nTicksApplied; // 0x1a74            
            source2sdk::entity2::GameTime_t m_flLastTick; // 0x1a78            
            // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_TempTree> m_hTree;
            char m_hTree[0x4]; // 0x1a7c            
            source2sdk::server::CDOTA_Tree* m_pTree; // 0x1a80            
            VectorWS m_vPullPosition; // 0x1a88            
            Vector m_vDir; // 0x1a94            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Bushwhack_Trap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_Bushwhack_Trap) == 0x1aa0);
    };
};
