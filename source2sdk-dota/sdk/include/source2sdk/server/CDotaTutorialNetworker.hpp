#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CSpeechBubbleInfo.hpp"

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
        // Size: 0xc40
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDotaTutorialNetworker : public source2sdk::server::CBaseEntity
        {
        public:
            std::int32_t m_nTutorialState; // 0x498            
            std::int32_t m_nTaskProgress; // 0x49c            
            std::int32_t m_nTaskSteps; // 0x4a0            
            std::int32_t m_nTaskSecondsRemianing; // 0x4a4            
            std::int32_t m_nUIState; // 0x4a8            
            std::int32_t m_nShopState; // 0x4ac            
            VectorWS m_TargetLocation; // 0x4b0            
            uint8_t _pad04bc[0x4]; // 0x4bc
            // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CSpeechBubbleInfo> m_SpeechBubbles;
            char m_SpeechBubbles[0x578]; // 0x4c0            
            std::int32_t m_nLocationID; // 0xa38            
            char m_GuideStr[256]; // 0xa3c            
            char m_QuickBuyStr[256]; // 0xb3c            
            uint8_t _pad0c3c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaTutorialNetworker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaTutorialNetworker) == 0xc40);
    };
};
