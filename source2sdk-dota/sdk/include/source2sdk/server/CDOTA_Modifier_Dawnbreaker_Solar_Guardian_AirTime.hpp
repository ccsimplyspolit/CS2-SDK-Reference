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
        class CDOTA_Modifier_Dawnbreaker_Solar_Guardian_AirTime : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flStartZ; // 0x1a58            
            float m_flCurTime; // 0x1a5c            
            Vector m_vDirection; // 0x1a60            
            float m_flEndTime; // 0x1a6c            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x1a70            
            VectorWS m_vCurrentTargetPosition; // 0x1a74            
            VectorWS m_vDesiredTargetPosition; // 0x1a80            
            VectorWS m_vStartPosition; // 0x1a8c            
            std::int32_t airtime_scepter_movement_speed; // 0x1a98            
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Solar_Guardian_AirTime because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Dawnbreaker_Solar_Guardian_AirTime) == 0x1aa0);
    };
};
