#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AI_SensingFlags_t.hpp"
#include "source2sdk/server/AI_VolumetricEventFlags_t.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/AI_VolumetricEventTypeMask_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_VolumetricEvent;
    };
};
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b8
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Senses : public source2sdk::client::CAI_Component
        {
        public:
            float m_flLookDist; // 0x50            
            float m_flLookDistIdle; // 0x54            
            float m_flLastLookDist; // 0x58            
            source2sdk::entity2::GameTime_t m_TimeLastLook; // 0x5c            
            // m_SeenHighPriority has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_SeenHighPriority;
            char m_SeenHighPriority[0x18]; // 0x60            
            // m_SeenNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_SeenNPCs;
            char m_SeenNPCs[0x18]; // 0x78            
            // m_SeenMisc has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_SeenMisc;
            char m_SeenMisc[0x18]; // 0x90            
            // metadata: MNotSaved
            // m_GatheredEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_GatheredEntities;
            char m_GatheredEntities[0x18]; // 0xa8            
            // metadata: MNotSaved
            // m_GatheredProxyEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_GatheredProxyEntities;
            char m_GatheredProxyEntities[0x18]; // 0xc0            
            // metadata: MNotSaved
            // m_SeenArrays has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>>* m_SeenArrays[3];
            char m_SeenArrays[0x18]; // 0xd8            
            source2sdk::entity2::GameTime_t m_TimeLastLookHighPriority; // 0xf0            
            source2sdk::entity2::GameTime_t m_TimeLastLookNPCs; // 0xf4            
            source2sdk::entity2::GameTime_t m_TimeLastLookMisc; // 0xf8            
            source2sdk::server::AI_SensingFlags_t m_iSensingFlags; // 0xfc            
            source2sdk::server::AI_VolumetricEventFlags_t m_nExclusionFlags; // 0x100            
            uint8_t _pad0102[0x6]; // 0x102
            source2sdk::server::CAI_VolumetricEvent* m_pCachedTaskEvent; // 0x108            
            float m_flSensingSensitivity; // 0x110            
            uint8_t _pad0114[0x4]; // 0x114
            source2sdk::server::AI_VolumetricEventTypeMask_t m_nSensingInterests; // 0x118            
            // metadata: MNotSaved
            // m_vecAudibleEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<source2sdk::server::AI_VolumetricEventHandle_t,16> m_vecAudibleEvents;
            char m_vecAudibleEvents[0x98]; // 0x120            
            
            // Datamap fields:
            // void m_SeenArrays; // 0xd8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Senses because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Senses) == 0x1b8);
    };
};
