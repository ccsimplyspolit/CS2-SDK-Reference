#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1ad8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkSeer_WallOfReplica : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vWallDirection; // 0x1a58            
            Vector m_vWallRight; // 0x1a64            
            uint8_t _pad1a70[0x18]; // 0x1a70
            // m_PreventReplicateTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<std::int32_t,source2sdk::entity2::GameTime_t> m_PreventReplicateTime;
            char m_PreventReplicateTime[0x28]; // 0x1a88            
            float width; // 0x1ab0            
            std::int32_t wall_damage; // 0x1ab4            
            float slow_duration; // 0x1ab8            
            std::int32_t replica_damage_incoming; // 0x1abc            
            std::int32_t replica_damage_outgoing; // 0x1ac0            
            uint8_t _pad1ac4[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_WallOfReplica because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkSeer_WallOfReplica) == 0x1ad8);
    };
};
