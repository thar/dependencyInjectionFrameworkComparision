package test;

import org.junit.*;
import org.springframework.beans.factory.BeanFactory;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import writer.IWriter;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.verify;

public class MyTest {
    private ApplicationContext context;
    private static IWriter writer;

    public static IWriter getWriterMock() {
        return writer;
    }

    @Before
    public void setupTest() {
        writer = mock(IWriter.class);
        context = new ClassPathXmlApplicationContext(
                "META-INF/testingBeans.xml");
    }

    @After
    public void teardown() {
    }

    @Test
    public void test() {

        BeanFactory factory = context;
        MySpringBeanWithDependency test = (MySpringBeanWithDependency) factory
                .getBean("mySpringBeanWithDependency");
        test.run();
        verify(writer).writer("This is my test");
    }
}
