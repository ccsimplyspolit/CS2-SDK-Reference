#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
namespace source2sdk
{
    namespace vphysics2
    {
        struct IPhysAggregateInstance;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x260
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "HModelStrong m_hModel"
        // static metadata: MNetworkVarNames "Vector m_vRootBoneOffset"
        // static metadata: MNetworkVarNames "uint8 m_nRootBoneOffsetResetSerialNumber"
        // static metadata: MNetworkVarNames "bool m_bClientClothCreationSuppressed"
        // static metadata: MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
        // static metadata: MNetworkVarNames "int32 m_nBodyGroupChoices"
        // static metadata: MNetworkVarNames "int8 m_nIdealMotionType"
        #pragma pack(push, 1)
        class CModelState
        {
        public:
            uint8_t _pad0000[0xa0]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonModelChanged"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x8]; // 0xa0            
            CUtlSymbolLarge m_ModelName; // 0xa8            
            uint8_t _pad00b0[0x30]; // 0xb0
            // metadata: MPhysPtr
            source2sdk::vphysics2::IPhysAggregateInstance* m_pVPhysicsAggregate; // 0xe0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRootBoneOffsetChanged"
            Vector m_vRootBoneOffset; // 0xe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRootBoneOffsetResetChanged"
            std::uint8_t m_nRootBoneOffsetResetSerialNumber; // 0xf4            
            uint8_t _pad00f5[0xb]; // 0xf5
            // metadata: MNetworkEnable
            bool m_bClientClothCreationSuppressed; // 0x100            
            uint8_t _pad0101[0xaf]; // 0x101
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
            std::uint64_t m_MeshGroupMask; // 0x1b0            
            uint8_t _pad01b8[0x48]; // 0x1b8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "bodyGroupChoiceChanged"
            // m_nBodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_nBodyGroupChoices;
            char m_nBodyGroupChoices[0x18]; // 0x200            
            uint8_t _pad0218[0x32]; // 0x218
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMotionTypeChanged"
            std::int8_t m_nIdealMotionType; // 0x24a            
            std::int8_t m_nForceLOD; // 0x24b            
            std::int8_t m_nClothUpdateFlags; // 0x24c            
            uint8_t _pad024d[0x13];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CModelState, m_hModel) == 0xa0);
        static_assert(offsetof(source2sdk::client::CModelState, m_ModelName) == 0xa8);
        static_assert(offsetof(source2sdk::client::CModelState, m_pVPhysicsAggregate) == 0xe0);
        static_assert(offsetof(source2sdk::client::CModelState, m_vRootBoneOffset) == 0xe8);
        static_assert(offsetof(source2sdk::client::CModelState, m_nRootBoneOffsetResetSerialNumber) == 0xf4);
        static_assert(offsetof(source2sdk::client::CModelState, m_bClientClothCreationSuppressed) == 0x100);
        static_assert(offsetof(source2sdk::client::CModelState, m_MeshGroupMask) == 0x1b0);
        static_assert(offsetof(source2sdk::client::CModelState, m_nBodyGroupChoices) == 0x200);
        static_assert(offsetof(source2sdk::client::CModelState, m_nIdealMotionType) == 0x24a);
        static_assert(offsetof(source2sdk::client::CModelState, m_nForceLOD) == 0x24b);
        static_assert(offsetof(source2sdk::client::CModelState, m_nClothUpdateFlags) == 0x24c);
        
        static_assert(sizeof(source2sdk::client::CModelState) == 0x260);
    };
};
