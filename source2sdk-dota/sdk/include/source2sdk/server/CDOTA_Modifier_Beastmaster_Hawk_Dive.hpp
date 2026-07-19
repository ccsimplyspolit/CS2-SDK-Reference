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
        class CDOTA_Modifier_Beastmaster_Hawk_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a58            
            float m_flPredictedTotalTime; // 0x1a5c            
            VectorWS m_vStartPosition; // 0x1a60            
            float m_flCurrentTimeHoriz; // 0x1a6c            
            float m_flCurrentTimeVert; // 0x1a70            
            bool m_bHorizontalMotionInterrupted; // 0x1a74            
            bool m_bDamageApplied; // 0x1a75            
            uint8_t _pad1a76[0x2]; // 0x1a76
            Vector m_vHorizontalVelocity; // 0x1a78            
            VectorWS m_vLastKnownTargetPosition; // 0x1a84            
            float m_flInitialVelocityZ; // 0x1a90            
            bool m_bDone; // 0x1a94            
            uint8_t _pad1a95[0x3]; // 0x1a95
            std::int32_t dive_damage; // 0x1a98            
            float dive_root_duration; // 0x1a9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_Hawk_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Beastmaster_Hawk_Dive) == 0x1aa0);
    };
};
