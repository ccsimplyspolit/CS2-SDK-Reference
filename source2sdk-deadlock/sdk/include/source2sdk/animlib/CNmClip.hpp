#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmClip_ModelSpaceSamplingChainLink_t.hpp"
#include "source2sdk/animlib/CNmRootMotionData.hpp"
#include "source2sdk/animlib/CNmSyncTrack.hpp"
#include "source2sdk/animlib/NmCompressionSettings_t.hpp"
#include "source2sdk/animlib/NmFloatCurveCompressionSettings_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x240
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmClip
        {
        public:
            // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
            char m_skeleton[0x8]; // 0x0            
            std::uint32_t m_nNumFrames; // 0x8            
            float m_flDuration; // 0xc            
            CUtlBinaryBlock m_compressedPoseData; // 0x10            
            // m_trackCompressionSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::NmCompressionSettings_t> m_trackCompressionSettings;
            char m_trackCompressionSettings[0x18]; // 0x20            
            // m_compressedPoseOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_compressedPoseOffsets;
            char m_compressedPoseOffsets[0x18]; // 0x38            
            // m_floatCurveIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_floatCurveIDs;
            char m_floatCurveIDs[0x18]; // 0x50            
            // m_floatCurveDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::NmFloatCurveCompressionSettings_t> m_floatCurveDefs;
            char m_floatCurveDefs[0x18]; // 0x68            
            // m_compressedFloatCurveData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint16_t> m_compressedFloatCurveData;
            char m_compressedFloatCurveData[0x18]; // 0x80            
            // m_compressedFloatCurveOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_compressedFloatCurveOffsets;
            char m_compressedFloatCurveOffsets[0x18]; // 0x98            
            uint8_t _pad00b0[0x28]; // 0xb0
            // m_secondaryAnimations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<source2sdk::animlib::CNmClip*,1> m_secondaryAnimations;
            char m_secondaryAnimations[0x20]; // 0xd8            
            source2sdk::animlib::CNmSyncTrack m_syncTrack; // 0xf8            
            uint8_t _pad01a8[0x8]; // 0x1a8
            source2sdk::animlib::CNmRootMotionData m_rootMotion; // 0x1b0            
            bool m_bIsAdditive; // 0x200            
            uint8_t _pad0201[0x7]; // 0x201
            // m_modelSpaceSamplingChain has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animlib::CNmClip_ModelSpaceSamplingChainLink_t> m_modelSpaceSamplingChain;
            char m_modelSpaceSamplingChain[0x18]; // 0x208            
            // m_modelSpaceBoneSamplingIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_modelSpaceBoneSamplingIndices;
            char m_modelSpaceBoneSamplingIndices[0x18]; // 0x220            
            uint8_t _pad0238[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_skeleton) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_nNumFrames) == 0x8);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_flDuration) == 0xc);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_compressedPoseData) == 0x10);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_trackCompressionSettings) == 0x20);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_compressedPoseOffsets) == 0x38);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_floatCurveIDs) == 0x50);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_floatCurveDefs) == 0x68);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_compressedFloatCurveData) == 0x80);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_compressedFloatCurveOffsets) == 0x98);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_secondaryAnimations) == 0xd8);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_syncTrack) == 0xf8);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_rootMotion) == 0x1b0);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_bIsAdditive) == 0x200);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_modelSpaceSamplingChain) == 0x208);
        static_assert(offsetof(source2sdk::animlib::CNmClip, m_modelSpaceBoneSamplingIndices) == 0x220);
        
        static_assert(sizeof(source2sdk::animlib::CNmClip) == 0x240);
    };
};
