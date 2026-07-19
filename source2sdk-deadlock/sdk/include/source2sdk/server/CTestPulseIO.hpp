#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/server/CTestPulseIO_EntityHandleIntArgs_t.hpp"
#include "source2sdk/server/CTestPulseIO_EntityNameStringArgs_t.hpp"
#include "source2sdk/server/CTestPulseIO_FloatStringArgs_t.hpp"
#include "source2sdk/server/CTestPulseIO_ThreeStringArgs_t.hpp"
#include "source2sdk/server/TestInputOutputCombinationsEnum_t.hpp"
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
        // Size: 0x768
        // Has VTable
        #pragma pack(push, 1)
        class CTestPulseIO : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnVariantVoid; // 0x4a0            
            // m_OnVariantBool has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<bool> m_OnVariantBool;
            char m_OnVariantBool[0x20]; // 0x4b8            
            // m_OnVariantInt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnVariantInt;
            char m_OnVariantInt[0x20]; // 0x4d8            
            // m_OnVariantFloat has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnVariantFloat;
            char m_OnVariantFloat[0x20]; // 0x4f8            
            // m_OnVariantString has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlSymbolLarge> m_OnVariantString;
            char m_OnVariantString[0x20]; // 0x518            
            // m_OnVariantColor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Color> m_OnVariantColor;
            char m_OnVariantColor[0x20]; // 0x538            
            // m_OnVariantVector has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Vector> m_OnVariantVector;
            char m_OnVariantVector[0x28]; // 0x558            
            bool m_bAllowEmptyInputs; // 0x580            
            uint8_t _pad0581[0x7]; // 0x581
            source2sdk::entity2::CEntityIOOutput m_OnInternalTestVoid; // 0x588            
            // m_OnInternalTestBool has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<bool> m_OnInternalTestBool;
            char m_OnInternalTestBool[0x20]; // 0x5a0            
            // m_OnInternalTestInt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnInternalTestInt;
            char m_OnInternalTestInt[0x20]; // 0x5c0            
            // m_OnInternalTestFloat has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnInternalTestFloat;
            char m_OnInternalTestFloat[0x20]; // 0x5e0            
            // m_OnInternalTestString has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlSymbolLarge> m_OnInternalTestString;
            char m_OnInternalTestString[0x20]; // 0x600            
            // m_OnInternalTestColor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Color> m_OnInternalTestColor;
            char m_OnInternalTestColor[0x20]; // 0x620            
            // m_OnInternalTestVector has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Vector> m_OnInternalTestVector;
            char m_OnInternalTestVector[0x28]; // 0x640            
            // m_OnInternalTestEntityName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CEntityNameString> m_OnInternalTestEntityName;
            char m_OnInternalTestEntityName[0x20]; // 0x668            
            // m_OnInternalTestEntityHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnInternalTestEntityHandle;
            char m_OnInternalTestEntityHandle[0x20]; // 0x688            
            // m_OnInternalTestSchemaEnum has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::TestInputOutputCombinationsEnum_t> m_OnInternalTestSchemaEnum;
            char m_OnInternalTestSchemaEnum[0x20]; // 0x6a8            
            // m_OnInternalTestFloatString has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::CTestPulseIO_FloatStringArgs_t> m_OnInternalTestFloatString;
            char m_OnInternalTestFloatString[0x28]; // 0x6c8            
            // m_OnInternalTestEntityNameString has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::CTestPulseIO_EntityNameStringArgs_t> m_OnInternalTestEntityNameString;
            char m_OnInternalTestEntityNameString[0x28]; // 0x6f0            
            // m_OnInternalTestEntityHandleInt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::CTestPulseIO_EntityHandleIntArgs_t> m_OnInternalTestEntityHandleInt;
            char m_OnInternalTestEntityHandleInt[0x20]; // 0x718            
            // m_OnInternalTestStringStringString has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<source2sdk::server::CTestPulseIO_ThreeStringArgs_t> m_OnInternalTestStringStringString;
            char m_OnInternalTestStringStringString[0x30]; // 0x738            
            
            // Datamap fields:
            // void InputVariantVoid; // 0x0
            // bool InputVariantBool; // 0x0
            // int32_t InputVariantInt; // 0x0
            // float InputVariantFloat; // 0x0
            // CUtlSymbolLarge InputVariantString; // 0x0
            // Color InputVariantColor; // 0x0
            // Vector InputVariantVector; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTestPulseIO because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTestPulseIO) == 0x768);
    };
};
