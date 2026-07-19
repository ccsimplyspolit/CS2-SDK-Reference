#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_SpeechBubbleInfo.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xdb0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_DotaTutorialNetworker : public source2sdk::client::C_BaseEntity
        {
        public:
            std::int32_t m_nTutorialState; // 0x5f0            
            std::int32_t m_nTaskProgress; // 0x5f4            
            std::int32_t m_nTaskSteps; // 0x5f8            
            std::int32_t m_nTaskSecondsRemianing; // 0x5fc            
            std::int32_t m_nUIState; // 0x600            
            std::int32_t m_nShopState; // 0x604            
            VectorWS m_TargetLocation; // 0x608            
            // m_TargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_TargetEntity;
            char m_TargetEntity[0x4]; // 0x614            
            // m_SpeechBubbles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::C_SpeechBubbleInfo> m_SpeechBubbles;
            char m_SpeechBubbles[0x578]; // 0x618            
            std::int32_t m_nLocationID; // 0xb90            
            char m_GuideStr[256]; // 0xb94            
            char m_QuickBuyStr[256]; // 0xc94            
            std::int32_t m_nPreTutorialState; // 0xd94            
            std::int32_t m_nPreUIState; // 0xd98            
            std::int32_t m_nPreShopState; // 0xd9c            
            VectorWS m_vecPrevTargetLocation; // 0xda0            
            // m_hPrevTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrevTargetEntity;
            char m_hPrevTargetEntity[0x4]; // 0xdac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DotaTutorialNetworker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DotaTutorialNetworker) == 0xdb0);
    };
};
