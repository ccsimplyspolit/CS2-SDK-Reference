#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_CameraServices.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b0
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayerBase_CameraServices : public source2sdk::server::CPlayer_CameraServices
        {
        public:
            std::uint32_t m_iFOV; // 0x178            
            std::uint32_t m_iFOVStart; // 0x17c            
            source2sdk::entity2::GameTime_t m_flFOVTime; // 0x180            
            float m_flFOVRate; // 0x184            
            // m_hZoomOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hZoomOwner;
            char m_hZoomOwner[0x4]; // 0x188            
            uint8_t _pad018c[0x4]; // 0x18c
            // m_hTriggerFogList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTriggerFogList;
            char m_hTriggerFogList[0x18]; // 0x190            
            // m_hLastFogTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastFogTrigger;
            char m_hLastFogTrigger[0x4]; // 0x1a8            
            uint8_t _pad01ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerBase_CameraServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerBase_CameraServices) == 0x1b0);
    };
};
