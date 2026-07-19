#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace rendersystemdx11
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RsBlendStateDesc_t
        {
        public:
            std::uint32_t m_srcBlendBits; // 0x0            
            std::uint32_t m_destBlendBits; // 0x4            
            std::uint32_t m_srcBlendAlphaBits; // 0x8            
            std::uint32_t m_destBlendAlphaBits; // 0xc            
            std::uint32_t m_renderTargetWriteMaskBits; // 0x10            
            // start of bitfield block
            uint32_t m_blendOpBits: 30;
            uint32_t m_bAlphaToCoverageEnable: 1;
            uint32_t m_bIndependentBlendEnable: 1;
            // end of bitfield block// 32 bits
            std::uint32_t m_blendOpAlphaBits; // 0x18            
            std::uint8_t m_blendEnableBits; // 0x1c            
            std::uint8_t m_srgbWriteEnableBits; // 0x1d            
            uint8_t _pad001e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_srcBlendBits) == 0x0);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_destBlendBits) == 0x4);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_srcBlendAlphaBits) == 0x8);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_destBlendAlphaBits) == 0xc);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_renderTargetWriteMaskBits) == 0x10);
        // Cannot assert offset of bitfield RsBlendStateDesc_t::m_blendOpBits
        // Cannot assert offset of bitfield RsBlendStateDesc_t::m_bAlphaToCoverageEnable
        // Cannot assert offset of bitfield RsBlendStateDesc_t::m_bIndependentBlendEnable
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_blendOpAlphaBits) == 0x18);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_blendEnableBits) == 0x1c);
        static_assert(offsetof(source2sdk::rendersystemdx11::RsBlendStateDesc_t, m_srgbWriteEnableBits) == 0x1d);
        
        static_assert(sizeof(source2sdk::rendersystemdx11::RsBlendStateDesc_t) == 0x20);
    };
};
