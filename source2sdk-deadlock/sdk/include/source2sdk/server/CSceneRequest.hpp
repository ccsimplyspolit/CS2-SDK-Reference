#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ENPCBehaviorOverride_t.hpp"
#include "source2sdk/client/SceneRequestHandle_t.hpp"
#include "source2sdk/server/ESceneRequestState_t.hpp"
#include "source2sdk/server/SceneRequestTargetMapPair_t.hpp"
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
        // Standard-layout class: true
        // Size: 0x70
        #pragma pack(push, 1)
        class CSceneRequest
        {
        public:
            CUtlSymbolLarge m_szPayloadVDataName; // 0x0            
            source2sdk::client::SceneRequestHandle_t m_uHandle; // 0x8            
            source2sdk::server::ESceneRequestState_t m_state; // 0xc            
            source2sdk::client::ENPCBehaviorOverride_t m_nNPCBehaviorOverride; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            // m_vecActorMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::SceneRequestTargetMapPair_t> m_vecActorMap;
            char m_vecActorMap[0x18]; // 0x18            
            // m_vecAnchorMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::SceneRequestTargetMapPair_t> m_vecAnchorMap;
            char m_vecAnchorMap[0x18]; // 0x30            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x48            
            uint8_t _pad004c[0x4]; // 0x4c
            KeyValues3 m_nameMapKV3; // 0x50            
            uint8_t _pad0060[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CSceneRequest, m_szPayloadVDataName) == 0x0);
        static_assert(offsetof(source2sdk::server::CSceneRequest, m_uHandle) == 0x8);
        static_assert(offsetof(source2sdk::server::CSceneRequest, m_state) == 0xc);
        static_assert(offsetof(source2sdk::server::CSceneRequest, m_nNPCBehaviorOverride) == 0x10);
        static_assert(offsetof(source2sdk::server::CSceneRequest, m_vecActorMap) == 0x18);
        static_assert(offsetof(source2sdk::server::CSceneRequest, m_vecAnchorMap) == 0x30);
        static_assert(offsetof(source2sdk::server::CSceneRequest, m_hOwner) == 0x48);
        static_assert(offsetof(source2sdk::server::CSceneRequest, m_nameMapKV3) == 0x50);
        
        static_assert(sizeof(source2sdk::server::CSceneRequest) == 0x70);
    };
};
