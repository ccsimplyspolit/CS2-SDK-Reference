#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPathKeyFrame.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathKeyFrame;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x510
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseMoveBehavior : public source2sdk::server::CPathKeyFrame
        {
        public:
            std::int32_t m_iPositionInterpolator; // 0x4e0            
            std::int32_t m_iRotationInterpolator; // 0x4e4            
            float m_flAnimStartTime; // 0x4e8            
            float m_flAnimEndTime; // 0x4ec            
            float m_flAverageSpeedAcrossFrame; // 0x4f0            
            // m_pCurrentKeyFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathKeyFrame> m_pCurrentKeyFrame;
            char m_pCurrentKeyFrame[0x4]; // 0x4f4            
            // m_pTargetKeyFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathKeyFrame> m_pTargetKeyFrame;
            char m_pTargetKeyFrame[0x4]; // 0x4f8            
            // m_pPreKeyFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathKeyFrame> m_pPreKeyFrame;
            char m_pPreKeyFrame[0x4]; // 0x4fc            
            // m_pPostKeyFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathKeyFrame> m_pPostKeyFrame;
            char m_pPostKeyFrame[0x4]; // 0x500            
            float m_flTimeIntoFrame; // 0x504            
            std::int32_t m_iDirection; // 0x508            
            uint8_t _pad050c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseMoveBehavior because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseMoveBehavior) == 0x510);
    };
};
