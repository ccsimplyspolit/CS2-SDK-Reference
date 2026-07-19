#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/SnapshotIndexType_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x388
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_InitSkinnedPositionFromCPSnapshot : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nSnapshotControlPointNumber; // 0x1e0            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1e4            
            // metadata: MPropertyFriendlyName "random order"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
            bool m_bRandom; // 0x1e8            
            uint8_t _pad01e9[0x3]; // 0x1e9
            // metadata: MPropertyFriendlyName "random seed"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
            std::int32_t m_nRandomSeed; // 0x1ec            
            // metadata: MPropertyFriendlyName "prepare for rigid lock"
            bool m_bRigid; // 0x1f0            
            // metadata: MPropertyFriendlyName "set normal"
            bool m_bSetNormal; // 0x1f1            
            // metadata: MPropertyFriendlyName "normal velocity ignore delta time"
            bool m_bIgnoreDt; // 0x1f2            
            uint8_t _pad01f3[0x1]; // 0x1f3
            // metadata: MPropertyFriendlyName "normal velocity min"
            float m_flMinNormalVelocity; // 0x1f4            
            // metadata: MPropertyFriendlyName "normal velocity max"
            float m_flMaxNormalVelocity; // 0x1f8            
            // metadata: MPropertyFriendlyName "Snapshot Read Type"
            source2sdk::particles::SnapshotIndexType_t m_nIndexType; // 0x1fc            
            // metadata: MPropertyFriendlyName "Snapshot Index"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
            source2sdk::particleslib::CPerParticleFloatInput m_flReadIndex; // 0x200            
            // metadata: MPropertyFriendlyName "particle increment amount"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
            float m_flIncrement; // 0x370            
            // metadata: MPropertyFriendlyName "Full Loop Increment Amount"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
            std::int32_t m_nFullLoopIncrement; // 0x374            
            // metadata: MPropertyFriendlyName "Snapshot start point"
            // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
            std::int32_t m_nSnapShotStartPoint; // 0x378            
            // metadata: MPropertyFriendlyName "inherited bone velocity"
            float m_flBoneVelocity; // 0x37c            
            // metadata: MPropertyFriendlyName "max inherited bone velocity"
            float m_flBoneVelocityMax; // 0x380            
            // metadata: MPropertyFriendlyName "Set Color"
            bool m_bCopyColor; // 0x384            
            // metadata: MPropertyFriendlyName "Set Alpha"
            bool m_bCopyAlpha; // 0x385            
            // metadata: MPropertyFriendlyName "Set Radius"
            bool m_bSetRadius; // 0x386            
            uint8_t _pad0387[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_InitSkinnedPositionFromCPSnapshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_InitSkinnedPositionFromCPSnapshot) == 0x388);
    };
};
